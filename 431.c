void fun()
{
  int entity_7 = 72;
  char entity_3[60] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memset(entity_3, 'o', 60-1);
  entity_3[60-1]='';
  entity_7 = 44;
  memcpy(entity_1, entity_3, 60*sizeof(char));
}