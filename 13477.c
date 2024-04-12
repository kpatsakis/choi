void fun()
{
  int entity_1 = 70;
  char* entity_5;
  char entity_7[6] = "";
  memset(entity_7, 'd', 6-1);
  entity_7[6-1]='0';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[0]='0';
  entity_1 = 17;
  strcpy(entity_5, entity_7);
}