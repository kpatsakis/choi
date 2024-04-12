void fun()
{
  int entity_8 = 18;
  entity_8 = 82;
  char* entity_5;
  char entity_4[entity_8] = "";
  memset(entity_4, 'I', entity_8-1);
  entity_4[entity_8-1]='0';
  entity_5 = (char*)malloc(59*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_4, entity_8*sizeof(char));
}