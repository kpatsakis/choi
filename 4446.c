void fun()
{
  int entity_6 = 76;
  char entity_7[89] = "";
  entity_7 = NULL;
  char* entity_2;
  memset(entity_7, 'i', 89-1);
  entity_7[89-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  entity_6 = 73;
  memcpy(entity_2, entity_7, 89*sizeof(char));
}