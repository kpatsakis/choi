void fun()
{
  int entity_8 = 69;
  char* entity_1;
  char entity_2[38] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'C', 38-1);
  entity_2[38-1]='';
  entity_3 = (char*)malloc(48*sizeof(char));
  entity_3[48-1]='';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memcpy(entity_1, entity_2, 38*sizeof(char));
}