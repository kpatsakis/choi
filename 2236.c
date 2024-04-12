void fun()
{
  int entity_7 = 31;
  char* entity_3;
  char entity_2[40] = "";
  entity_2 = NULL;
  memset(entity_2, 'b', 40-1);
  entity_2[40-1]='';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  entity_7 = 65;
  memcpy(entity_3, entity_2, 40*sizeof(char));
}