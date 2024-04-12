void fun()
{
  int entity_3 = 99;
  char* entity_9;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_2, 'J', entity_3-1);
  entity_2[entity_3-1]='';
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[16-1]='';
  entity_2[66] = 'B';
}