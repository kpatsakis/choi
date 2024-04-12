void fun()
{
  int entity_9 = 45;
  char entity_6[69] = "";
  char entity_0[67] = "";
  char* entity_2;
  memset(entity_6, 'y', 69-1);
  entity_6[69-1]='0';
  entity_2 = (char*)malloc(60*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'C', 67-1);
  entity_0[67-1]='0';
  strcpy(entity_2, entity_0);
}