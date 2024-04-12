void fun()
{
  int entity_0 = 21;
  int entity_6 = 53;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char* entity_3;
  memset(entity_8, 'B', entity_0-1);
  entity_8[entity_0-1]='';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[93-1]='';
  entity_8[17] = 'I';
}