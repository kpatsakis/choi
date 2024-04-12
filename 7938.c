void fun()
{
  int entity_2 = 61;
  char entity_1[89] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_1, 'm', 89-1);
  entity_1[89-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  entity_2 = 97;
  memcpy(entity_7, entity_1, 89*sizeof(char));
}