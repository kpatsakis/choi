void fun()
{
  int entity_6 = 64;
  entity_6 = 31;
  char* entity_0;
  char entity_2[37] = "";
  entity_2 = NULL;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  entity_0 = (char*)malloc(64*sizeof(char));
  entity_0[64-1]='';
  memset(entity_2, 'r', 37-1);
  entity_2[37-1]='';
  memset(entity_9, 'X', entity_6-1);
  entity_9[entity_6-1]='';
  entity_9[66] = 'O';
}