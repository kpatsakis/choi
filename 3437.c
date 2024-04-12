void fun()
{
  int entity_1 = 44;
  char* entity_2;
  char entity_6[89] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(71*sizeof(char));
  entity_2[71-1]='';
  memset(entity_6, 'K', 89-1);
  entity_6[89-1]='';
  memcpy(entity_2, entity_6, 89*sizeof(char));
}