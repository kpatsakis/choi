void fun()
{
  int entity_6 = 53;
  char* entity_2;
  char entity_3[19] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(82*sizeof(char));
  entity_2[82-1]='';
  memset(entity_3, 'c', 19-1);
  entity_3[19-1]='';
  entity_3[entity_6] = 'm';
}