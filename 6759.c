void fun()
{
  int entity_7 = 83;
  int entity_6 = 89;
  char* entity_8;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[94-1]='';
  memset(entity_5, 'u', entity_6-1);
  entity_5[entity_6-1]='';
  entity_6 = 59;
  memcpy(entity_8, entity_5, entity_6*sizeof(char));
}