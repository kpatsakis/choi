void fun()
{
  int entity_6 = 74;
  entity_6 = 64;
  char* entity_8;
  char* entity_5;
  char entity_3[4] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memset(entity_3, 'b', 4-1);
  entity_3[4-1]='';
  entity_5 = (char*)malloc(68*sizeof(char));
  entity_5[68-1]='';
  memcpy(entity_8, entity_3, 4*sizeof(char));
}