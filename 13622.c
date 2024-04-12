void fun()
{
  int entity_3 = 100;
  char* entity_7;
  char entity_5[41] = "";
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'R', 41-1);
  entity_5[41-1]='0';
  entity_3 = 33;
  strcpy(entity_7, entity_5);
}