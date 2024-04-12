void fun()
{
  int entity_5 = 20;
  char entity_9 = 'L';
  char entity_4[47] = "";
  char* entity_2;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'k', 47-1);
  entity_4[47-1]='0';
  entity_5 = 16;
  strcpy(entity_2, entity_4);
}