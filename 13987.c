void fun()
{
  int entity_4 = 36;
  entity_4 = 35;
  char entity_2 = 'N';
  char* entity_9;
  char entity_5[68] = "";
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'C', 68-1);
  entity_5[68-1]='0';
  strcpy(entity_9, entity_5);
}