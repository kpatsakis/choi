void fun()
{
  int entity_5 = 44;
  int entity_7 = 57;
  char entity_6[25] = "";
  entity_6 = NULL;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_6, 'w', 25-1);
  entity_6[25-1]='';
  memset(entity_8, 'M', entity_7-1);
  entity_8[entity_7-1]='';
  entity_2 = (char*)malloc(8*sizeof(char));
  entity_2[8-1]='';
  memcpy(entity_2, entity_8, entity_7*sizeof(char));
}