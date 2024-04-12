void fun()
{
  int entity_8 = 26;
  entity_8 = 92;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[85-1]='';
  memset(entity_9, 'a', entity_8-1);
  entity_9[entity_8-1]='';
  entity_9[66] = 'f';
}