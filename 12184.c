void fun()
{
  int entity_4 = 20;
  int entity_3 = 19;
  char entity_7[82] = "";
  char entity_6[18] = "";
  char* entity_9;
  memset(entity_6, 'A', 18-1);
  entity_6[18-1]='0';
  memset(entity_7, 'g', 82-1);
  entity_7[82-1]='0';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_7);
}