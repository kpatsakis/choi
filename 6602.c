void fun()
{
  int entity_3 = 30;
  int entity_6 = 100;
  char entity_4[1] = "";
  entity_4 = NULL;
  char* entity_7;
  memset(entity_4, 'u', 1-1);
  entity_4[1-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memcpy(entity_7, entity_4, 1*sizeof(char));
}