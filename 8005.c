void fun()
{
  int entity_2 = 54;
  entity_2 = 59;
  char entity_3[14] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memset(entity_3, 'b', 14-1);
  entity_3[14-1]='';
  memcpy(entity_5, entity_3, 14*sizeof(char));
}