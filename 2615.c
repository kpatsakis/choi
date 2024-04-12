void fun()
{
  int entity_1 = 78;
  char entity_2 = 'N';
  char* entity_3;
  char entity_7 = 'P';
  char entity_4[89] = "";
  entity_4 = NULL;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_4, 'D', 89-1);
  entity_4[89-1]='';
  memcpy(entity_3, entity_4, 89*sizeof(char));
}