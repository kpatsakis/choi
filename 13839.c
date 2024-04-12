void fun()
{
  int entity_3 = 50;
  char* entity_7;
  char entity_9[68] = "";
  memset(entity_9, 'O', 68-1);
  entity_9[68-1]='0';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  entity_3 = 5;
  strcpy(entity_7, entity_9);
}