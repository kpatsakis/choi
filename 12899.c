void fun()
{
  int entity_1 = 44;
  char entity_9[94] = "";
  char* entity_6;
  char* entity_7;
  memset(entity_9, 'E', 94-1);
  entity_9[94-1]='0';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[0]='0';
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_7, entity_9);
}