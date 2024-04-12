void fun()
{
  int entity_6 = 6;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char entity_1 = 'M';
  char* entity_2;
  char* entity_8;
  char* entity_4;
  entity_8 = (char*)malloc(2*sizeof(char));
  entity_8[2-1]='';
  entity_4 = (char*)malloc(19*sizeof(char));
  entity_4[19-1]='';
  entity_2 = (char*)malloc(34*sizeof(char));
  entity_2[34-1]='';
  memset(entity_5, 'Y', entity_6-1);
  entity_5[entity_6-1]='';
  memcpy(entity_8, entity_5, entity_6*sizeof(char));
}