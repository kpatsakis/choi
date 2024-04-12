void fun()
{
  int entity_6 = 21;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(59*sizeof(char));
  entity_7[59-1]='';
  memset(entity_2, 'r', entity_6-1);
  entity_2[entity_6-1]='';
  entity_6 = 90;
  memcpy(entity_7, entity_2, entity_6*sizeof(char));
}