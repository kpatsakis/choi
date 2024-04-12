void fun()
{
  int entity_4 = 86;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char entity_8 = 'W';
  char* entity_7;
  char entity_2[97] = "";
  entity_2 = NULL;
  memset(entity_9, 'X', entity_4-1);
  entity_9[entity_4-1]='';
  entity_7 = (char*)malloc(72*sizeof(char));
  entity_7[72-1]='';
  memset(entity_2, 'L', 97-1);
  entity_2[97-1]='';
  entity_9[82] = 'i';
}