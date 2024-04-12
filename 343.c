void fun()
{
  int entity_6 = 31;
  int entity_3 = 63;
  char entity_9[9] = "";
  entity_9 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[19-1]='';
  memset(entity_9, 'X', 9-1);
  entity_9[9-1]='';
  entity_6 = 56;
  entity_9[entity_6] = 'e';
}