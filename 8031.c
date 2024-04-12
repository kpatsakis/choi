void fun()
{
  int entity_6 = 78;
  int entity_0 = 21;
  entity_6 = 72;
  char entity_3[38] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_3, 'b', 38-1);
  entity_3[38-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memcpy(entity_2, entity_3, 38*sizeof(char));
}