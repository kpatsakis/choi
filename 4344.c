void fun()
{
  int entity_9 = 29;
  entity_9 = 37;
  char entity_6[42] = "";
  entity_6 = NULL;
  char* entity_3;
  char entity_2[66] = "";
  entity_2 = NULL;
  memset(entity_6, 'r', 42-1);
  entity_6[42-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_2, 'c', 66-1);
  entity_2[66-1]='';
  strcpy(entity_3, entity_2);
}