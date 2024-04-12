void fun()
{
  int entity_8 = 35;
  char entity_9[66] = "";
  char* entity_2;
  entity_2 = (char*)malloc(2*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'x', 66-1);
  entity_9[66-1]='0';
  strcpy(entity_2, entity_9);
}