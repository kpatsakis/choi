void fun()
{
  int entity_3 = 16;
  int entity_6 = 70;
  char entity_9[7] = "";
  char* entity_2;
  memset(entity_9, 'Z', 7-1);
  entity_9[7-1]='0';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_9);
}