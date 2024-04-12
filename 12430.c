void fun()
{
  int entity_9 = 80;
  char entity_6[68] = "";
  char* entity_0;
  char entity_2[18] = "";
  memset(entity_6, 'c', 68-1);
  entity_6[68-1]='0';
  memset(entity_2, 'u', 18-1);
  entity_2[18-1]='0';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_6);
}