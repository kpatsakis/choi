void fun()
{
  int entity_2 = 37;
  char* entity_7;
  char entity_5[78] = "";
  char* entity_4;
  entity_7 = (char*)malloc(79*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'k', 78-1);
  entity_5[78-1]='0';
  entity_4 = (char*)malloc(22*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_5);
}