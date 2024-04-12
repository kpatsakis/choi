void fun()
{
  int entity_9 = 59;
  char entity_3[98] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(29*sizeof(char));
  entity_7[29-1]='';
  memset(entity_3, 'u', 98-1);
  entity_3[98-1]='';
  memcpy(entity_7, entity_3, 98*sizeof(char));
}