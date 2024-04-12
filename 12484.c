void fun()
{
  int entity_7 = 40;
  char* entity_5;
  char entity_4[entity_7] = "";
  memset(entity_4, 'u', entity_7-1);
  entity_4[entity_7-1]='0';
  entity_5 = (char*)malloc(92*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_4, entity_7*sizeof(char));
}