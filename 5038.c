void fun()
{
  int entity_6 = 76;
  int entity_8 = 63;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char entity_3[47] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(70*sizeof(char));
  entity_2[70-1]='';
  memset(entity_3, 'I', 47-1);
  entity_3[47-1]='';
  memset(entity_1, 'O', entity_8-1);
  entity_1[entity_8-1]='';
  memcpy(entity_2, entity_1, entity_8*sizeof(char));
}