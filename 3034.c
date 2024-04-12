void fun()
{
  int entity_3 = 59;
  int entity_1 = 11;
  char entity_6[94] = "";
  entity_6 = NULL;
  char* entity_2;
  char entity_9[86] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_9, 'O', 86-1);
  entity_9[86-1]='';
  memset(entity_6, 'n', 94-1);
  entity_6[94-1]='';
  memcpy(entity_2, entity_6, 94*sizeof(char));
}