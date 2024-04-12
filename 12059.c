void fun()
{
  int entity_0 = 90;
  char entity_8[entity_0] = "";
  char* entity_3;
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 's', entity_0-1);
  entity_8[entity_0-1]='0';
  strcpy(entity_3, entity_8);
}