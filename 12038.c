void fun()
{
  int entity_2 = 59;
  char entity_1[20] = "";
  char entity_9[2] = "";
  char entity_4 = 'u';
  char* entity_3;
  memset(entity_9, 'O', 2-1);
  entity_9[2-1]='0';
  memset(entity_1, 'r', 20-1);
  entity_1[20-1]='0';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_1);
}