void fun()
{
  int entity_8 = 64;
  char* entity_1;
  char entity_3[entity_8] = "";
  entity_1 = (char*)malloc(81*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 's', entity_8-1);
  entity_3[entity_8-1]='0';
  entity_8 = 48;
  strcpy(entity_1, entity_3);
}