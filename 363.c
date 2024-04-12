void fun()
{
  int entity_3 = 62;
  char* entity_7;
  char* entity_6;
  char entity_2[71] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[9-1]='';
  memset(entity_2, 'E', 71-1);
  entity_2[71-1]='';
  memcpy(entity_7, entity_2, 71*sizeof(char));
}