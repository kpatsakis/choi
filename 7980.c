void fun()
{
  int entity_6 = 61;
  char* entity_4;
  char entity_3[82] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_3, 't', 82-1);
  entity_3[82-1]='';
  memcpy(entity_4, entity_3, 82*sizeof(char));
}