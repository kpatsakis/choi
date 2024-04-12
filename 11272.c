void fun()
{
  int entity_2 = 69;
  char* entity_1;
  char entity_7[14] = "";
  entity_1 = (char*)malloc(83*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'O', 14-1);
  entity_7[14-1]='0';
  strcpy(entity_1, entity_7);
}