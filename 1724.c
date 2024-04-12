void fun()
{
  int entity_0 = 68;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 'u', entity_0-1);
  entity_4[entity_0-1]='';
  entity_8 = (char*)malloc(65*sizeof(char));
  entity_8[65-1]='';
  entity_4[68] = 'P';
}