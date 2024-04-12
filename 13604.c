void fun()
{
  int entity_3 = 98;
  char entity_7[87] = "";
  char* entity_9;
  memset(entity_7, 'w', 87-1);
  entity_7[87-1]='0';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[0]='0';
  entity_3 = 25;
  strcpy(entity_9, entity_7);
}