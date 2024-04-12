void fun()
{
  int entity_0 = 59;
  char* entity_3;
  char entity_6[entity_0] = "";
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'b', entity_0-1);
  entity_6[entity_0-1]='0';
  strcpy(entity_3, entity_6);
}