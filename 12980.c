void fun()
{
  int entity_2 = 82;
  char* entity_0;
  char entity_7[entity_2] = "";
  memset(entity_7, 't', entity_2-1);
  entity_7[entity_2-1]='0';
  entity_0 = (char*)malloc(13*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_7);
}