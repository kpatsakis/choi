void fun()
{
  int entity_5 = 100;
  entity_5 = 97;
  char entity_3 = 'K';
  char* entity_7;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 'R', entity_5-1);
  entity_1[entity_5-1]='';
  entity_7 = (char*)malloc(89*sizeof(char));
  entity_7[89-1]='';
  memcpy(entity_7, entity_1, entity_5*sizeof(char));
}