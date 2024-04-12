void fun()
{
  int entity_2 = 74;
  char entity_3 = 'z';
  char* entity_5;
  char entity_6[19] = "";
  entity_6 = NULL;
  memset(entity_6, 'q', 19-1);
  entity_6[19-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  entity_2 = 3;
  memcpy(entity_5, entity_6, 19*sizeof(char));
}