void fun()
{
  int entity_5 = 89;
  char entity_3[entity_5] = "";
  char* entity_0;
  char entity_8 = 'D';
  memset(entity_3, 'U', entity_5-1);
  entity_3[entity_5-1]='0';
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_3, entity_5*sizeof(char));
}