void fun()
{
  char entity_1[1] = "";
  entity_1 = NULL;
  char* entity_3;
  char* entity_4;
  char entity_7[78] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[22-1]='';
  memset(entity_7, 'A', 78-1);
  entity_7[78-1]='';
  entity_4 = (char*)malloc(19*sizeof(char));
  entity_4[19-1]='';
  memset(entity_1, 'S', 1-1);
  entity_1[1-1]='';
  memcpy(entity_3, entity_1, 1*sizeof(char));
}