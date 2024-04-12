void fun()
{
  char* entity_9;
  char entity_2[17] = "";
  char* entity_7;
  entity_7 = (char*)malloc(82*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'G', 17-1);
  entity_2[17-1]='0';
  entity_9 = (char*)malloc(24*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_2);
}